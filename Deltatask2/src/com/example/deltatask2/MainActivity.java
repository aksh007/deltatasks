package com.example.deltatask2;

import android.app.Activity;
import android.os.Bundle;
import android.os.Handler;
import android.os.SystemClock;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.TextView;





public class MainActivity extends Activity {
    /** Called when the activity is first created. */

    private TextView time;
    private Button start;
    private Button pause;
    private Button reset;
    private long mStartTime = 0L;
    private Handler mHandler = new Handler();
    long millis = 0L;
	protected long mTime;
	int flag=0;

    @Override
    public void onCreate(Bundle savedInstanceState) {
        this.requestWindowFeature(Window.FEATURE_NO_TITLE);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        if (mStartTime == 0L) {
        	
            mStartTime = SystemClock.uptimeMillis();
            mHandler.removeCallbacks(mUpdateTimeTask);
            


            }

            time = (TextView) findViewById(R.id.timeflag);

            start = (Button) findViewById(R.id.start);
            start.setOnClickListener(new View.OnClickListener() {
                public void onClick(View view){
                	flag=0;
                    mStartTime = SystemClock.uptimeMillis();
                    mHandler.postDelayed(mUpdateTimeTask, 0);
                }
            });

            pause = (Button) findViewById(R.id.pause);
            pause.setOnClickListener(new View.OnClickListener() {
                public void onClick(View view){
                    mTime += millis;
                    mHandler.removeCallbacks(mUpdateTimeTask);
                }
            });
    
            reset = (Button) findViewById(R.id.reset);
            reset.setOnClickListener(new View.OnClickListener() {
        
				
				@Override
				public void onClick(View view) {
					mStartTime =SystemClock.uptimeMillis();
					mTime=0L;
					flag=1;
                    mHandler.postDelayed(mUpdateTimeTask, 0);





					// TODO Auto-generated method stub
					
				}
			});
    
    
    
    
    
    }
    
    
    

    private Runnable mUpdateTimeTask = new Runnable() {
            public void run() {

                    millis= SystemClock.uptimeMillis() - mStartTime;
                    
                    long displayTime = mTime + millis;


                    int seconds = (int) (displayTime / 1000);
                    int minutes = seconds / 60;
                    seconds = seconds % 60;
                    int milliseconds = (int) (displayTime%1000);
                    time.setText("" + minutes + ":" + String.format("%02d",seconds)+ ":" 
                    + String.format("%03d",milliseconds));
                    if(flag==0)
                    mHandler.postDelayed(this,0);
            }

    };



}