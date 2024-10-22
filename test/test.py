import ctypes
import timeit
q_math = ctypes.CDLL("./q_math.so") # see q_math.c for info

def c_add(a: int, b: int):
    return q_math.add(a, b)
        

def py_add(a: int, b: int):
    return a + b

def test_c_add():
    assert c_add(1, 2) == 3
    assert c_add(-1, 2) == 1
    assert c_add(-1, -2) == -3
    assert c_add(0, 0) == 0

def test_py_math():
    assert py_add(1, 2) == 3
    assert py_add(4e17, 1e17) == 5e17
    assert py_add(-1, 2) == 1
    assert py_add(-1, -2) == -3
    assert py_add(0, 0) == 0

if __name__ == "__main__":
    test_py_math()
    test_c_add()
    print("Everything passed")