//快速幂取模 
typedef long long ll;

ll mod_pow(ll x,ll n,ll mod) 
{
    ll res=1;
	x%=mod;
    while(n>0)
    {
        if(n&1)res= res * x%mod; //如果二进制最低位为1，则乘上x^（2^i）
        
        x=x*x%mod;    //将x平方 
        
        n>>=1;      
    }
    
    return res;
}