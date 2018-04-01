using lib_cpp_wrapper;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpMain
{
    class Program
    {
        static void Main(string[] args)
        {
            lib_cpp_wrapper.TestClassWrapper tcw = new TestClassWrapper();
            
            Console.WriteLine(tcw.getNumPublic());
        }
    }
}
