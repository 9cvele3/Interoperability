using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CSharpGUI
{
    public partial class Form1 : Form
    {
        WorkerClass wc = new WorkerClass();
        lib_cpp_wrapper.TestClassWrapper tcw = new lib_cpp_wrapper.TestClassWrapper();

        public Form1()
        {
            InitializeComponent();
        }

        private void UpdateProgress(int value)
        {
            progressBar1.Value = value;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            wc.PC += UpdateProgress;
            wc.Work();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            tcw.ProgressChangedEvent += UpdateProgress;
            tcw.work();
        }
    }
}
