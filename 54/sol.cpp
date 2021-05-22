class Solution {

public:

    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> rst;

        if(matrix.size()==0){

            return rst;

        }

        if(matrix[0].size()==1){

            for(int i = 0 ; i < matrix.size() ; i++){

                rst.push_back(matrix[i][0]);

            }

            return rst;

        }

        //x_dir = 1(left to right) or -1(right to left)

        int x_dir = 1;

        int x_cnt = matrix[0].size();

        //y_dir = 1(top down) or -1(bottom up)

        int y_dir = 1;

        int y_cnt = matrix.size()-1;

        //current target and current index

        int x_tar = 0;

        int y_tar = 0;

        int cur_x, cur_y;

        cur_x = cur_y = 0;

        int cnt;

        cout<<"================================================================\n";

        while(y_cnt>=0){

            

            cnt = 0;

            if(x_dir==1)

                x_cnt--;

            x_tar+=x_dir*x_cnt;

            cout<<"current target x: ["<<y_tar<<", "<<x_tar<<"]"<<endl;

            cout<<"cnt, x_cnt: "<<cnt<<" "<<x_cnt<<endl;

            if(cnt==0 && y_cnt==0){

                rst.push_back(matrix[y_tar][x_tar]);

            }

            while(cur_x!=x_tar){

                cout<<"("<<y_tar<<", "<<cur_x<<")"<<endl;

                cout<<matrix[y_tar][cur_x]<<endl;

                rst.push_back(matrix[y_tar][cur_x]);

                cur_x+=x_dir;

                cnt++;

            }

 /*           if(x_cnt==1){

                cout<<matrix[y_tar][cur_x]<<endl;

                rst.push_back(matrix[y_tar][cur_x]);                

            }*/

            x_dir*=(-1);

            cnt = 0;

            cout<<"============== cnt, x_cnt: "<<cnt<<" "<<x_cnt<<endl;

            

            y_tar+=y_dir*y_cnt;

            cout<<"current target y: ["<<y_tar<<", "<<x_tar<<"]"<<endl;

            cout<<"cnt, y_cnt: "<<cnt<<" "<<y_cnt<<endl;

            while(cur_y!=y_tar){

                cout<<"("<<cur_y<<", "<<x_tar<<")"<<endl;

                cout<<matrix[cur_y][x_tar]<<endl;

                rst.push_back(matrix[cur_y][x_tar]);

                cur_y+=y_dir;

                cnt++;

            }

            if((x_cnt<1) && (y_cnt==0)){

                cout<<"push: "<<matrix[cur_y][x_tar]<<endl;

                rst.push_back(matrix[cur_y][x_tar]);

            }

            y_cnt--;

            y_dir*=(-1);

        }

        if(x_cnt==1){

            cout<<matrix[y_tar][cur_x]<<endl;

            rst.push_back(matrix[y_tar][cur_x]);                

        }

        return rst;

    }

};
