vector<int> A,B,C;
//加法
vector <int> add (vector<int> &A,vector<int> &B){
   int t =0;
   for(int i = 0;i<A.size() ||i<B.size();i++){//只要有一个长度还在，就循环
       if(i<A.size())  t+=A[i];
       if(i<B.size())  t+=B[i];
       C.push_back(t%10); //余数
       t/=10; //进位
   }
   if(t)  C.push_back(1); //如果有进位
   return C;

} 

//乘法，注意要防止前置0，可以用：if(C[C.size()-1]==0 ) cout<<0; 来判断
vector <int> mul (vector<int> &A,int b){
   int t =0;
   for(int i = 0;i<A.size() ||t;i++){ //t是进位
       if(i<A.size()) t+=A[i]*b; //防止数组越界
       C.push_back(t%10);
       t/=10;
   }
  // if(t)  C.push_back(t);
   return C;
    
}





int main(){
    string a,b;
    cin>>a>>b; //长度太长
    for(int i = a.size()-1;i>=0;i--)  A.push_back(a[i]-'0');
    for(int i = b.size()-1;i>=0;i--)  B.push_back(b[i]-'0');//转化为数字
    auto C = add(A,B);
    for(int i = C.size()-1;i>=0;i--) cout<<C[i];
    return 0;
}

