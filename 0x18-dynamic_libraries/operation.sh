#include <Python.h>
#define div custom_div

static PyObject* add(PyObject* self, PyObject* args)
{
	int a, b;
	
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	return (Py_BuildValue("i", (a + b)));
}
static PyObject* sub(PyObject* self, PyObject* args)
{
	
	int a, b;
	
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	return (Py_BuildValue("i", (a - b)));
}

static PyObject* div(PyObject* self, PyObject* args)
{
	int a, b;
	
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	if (b == 0)
	{
		PyErr_SetString(PyExc_ZeroDivisionError, "division by zero");
		return (NULL);
	}
	return (Py_BuildValue("i", (a / b)));
}
static PyObject* mod(PyObject* self, PyObject* args)
{
	int a, b;
	
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	if (b == 0)
	{
		PyErr_SetString(PyExc_ZeroDivisionError, "division by zero");
		return (NULL);
	}
	return (Py_BuildValue("i", (a % b)));
}
static PyObject* mul(PyObject* self, PyObject* args)
{
	int a, b;
	
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	return (Py_BuildValue("i", (a * b)));
}
static PyMethodDef myMethods[] = {
	{"add", add, METH_VARARGS, "Add two integers."},
	{"sub", sub, METH_VARARGS, "Subtract two integers."},
	{"div", div, METH_VARARGS, "Divide two integers."},
	{"mul", mul, METH_VARARGS, "Multiply two integers."},
	{"mod", mod, METH_VARARGS, "Module two integers."},
	{NULL, NULL, 0, NULL}
};
static struct PyModuleDef myModule = {
	PyModuleDef_HEAD_INIT,
	"myModule",
	"Python interface for performing basic arithmetic operations.",
	-1,
	myMethods
};

PyMODINIT_FUNC PyInit_myModule(void)
{
	return (PyModule_Create(&myModule));
}
