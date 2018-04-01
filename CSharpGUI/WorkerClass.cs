using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace CSharpGUI
{
    class WorkerClass
    {
        public void Work()
        {
            for(int i = 1; i <= 100; i++)
            {
                Thread.Sleep(20);
                OnPC(i);
            }
        }

        public event Action<int> PC;
        private void OnPC(int v)
        {
            var eh = PC;
            if(eh != null)
            {
                eh(v);
            }
        }
    }
}
