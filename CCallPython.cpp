#include <iostream>
#include <Python.h>

using namespace std;
int main()
{

	float weight;
	float height;

	Py_Initialize();  // Use Py_Initialize to init the Python interpreter
	if (!Py_IsInitialized()) // check if Python interpreter has been initialized
	{
		printf("Initialized failed");
		return 0;
	}
	// simple way to write python code
	PyRun_SimpleString("import sys\n"
					   "sys.path.append('./')\n"); // import sys module to set python program path

	PyObject* py_Module = NULL; // set Module variable
	PyObject* py_Func = NULL;   // set Function variable

	py_Module = PyImport_ImportModule("BMI_calculator"); // import Module Get_time.py
	
	if (py_Module == NULL) {  // check if Module has been imported
		cout << "Didn't get the Module" << endl;
	}

	py_Func = PyObject_GetAttrString(py_Module, "BMI"); // Get the Attribute (function) name, In python it call [def BMI()])
	PyErr_Print(); // if get Python error log and show it
	if (py_Func == NULL) {  // check if Function object has been setting
		cout << "Didn't get the Function" << endl;
	}

	cout << "Enter the weight(KG): " ;
	cin >> weight;
	cout << "Enter the height(cm): ";
	cin >> height;

	PyObject* args = Py_BuildValue("(ff)", weight, height); // pass c code value to python code

	PyObject* py_call = PyObject_CallObject(py_Func, args); // call python object and send args

	float result = 0; // set the valuse to get the python code's return 
	PyArg_Parse(py_call, "f", &result);
		
	cout << "res:" << result << endl;

	Py_Finalize();

	return 0;
}
