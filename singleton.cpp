#include "singleton.h"

//单例-饿汉式

//饿汉式的特点：
/*非 Lazy 初始化
  多线程安全
  优点：没有加锁，执行效率会提高。
  缺点：类加载时就初始化，浪费内存。*/

//Singleton *Singleton::m_pSingleton = new Singleton();

//Singleton *Singleton::GetInstance()
//{

//    return m_pSingleton;

//}
/*********************************************************************************/
//单例-懒汉式

/*懒汉式的特点：

Lazy 初始化
非多线程安全
优点：第一次调用才初始化，避免内存浪费。
缺点：必须加锁（在“线程安全”部分分享如何加锁）才能保证单例，但加锁会影响效率。*/

Singleton *Singleton::m_pSingleton = NULL;
//mutex Singleton::m_mutex;

Singleton *Singleton::GetInstance()
{
  if(m_pSingleton = NULL)
  {
      //lock_guard<mutex>lock(m_mutex);//自解锁
      m_pSingleton = new Singleton();
  }

  return m_pSingleton;

}


