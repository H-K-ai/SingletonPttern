#ifndef SINGLETON_H
#define SINGLETON_H


#include <iostream>
#include <mutex>
using namespace std;

//单例-懒汉式/饿汉式公用
class Singleton
{
  public:
    static Singleton* GetInstance();
  private:
    Singleton()
    {

    }//构造函数被保护
  private:
    static Singleton* m_pSingleton;//指向单例对象的指针
    //static mutex m_mutex;//锁

    // GC 机制
        class GC
        {
        public:
            ~GC()
            {
                // 可以在这里销毁所有的资源，例如：db 连接、文件句柄等
                if (m_pSingleton != NULL) {
                    cout << "Here destroy the m_pSingleton..." << endl;
                    delete m_pSingleton;
                    m_pSingleton = NULL;
                }
            }
            static GC gc;  // 用于释放单例
        };


};




#endif // SINGLETON_H
