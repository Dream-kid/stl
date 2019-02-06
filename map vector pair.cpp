//mp=make_pair
//pb=push_back
map<pair<ll,ll>,vector<ll> >v; // map vector pair
v[mp(1,2)].pb(0);
v[mp(1,2)].pb(1);
v[mp(1,2)].size();//size of v(1,2)
v[mp(1,2)][0]// acess value
  ////////////////////
map<ll,map<ll,ll> > m; //as 2d arr
m[a][b]++;
Just using vector, sort + unique
sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
//erease
  v1.erase(v1.begin()+pos);
