package shulaing.han.ndk_callback;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;

public class MainActivity extends Activity {

	static{
		System.loadLibrary("jni");
	}
	DataProvider dp;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		dp = new DataProvider();
	}

	public void onClick(View view) {
		int id = view.getId();
		switch (id) {
			case R.id.call_void_method:
				dp.callCcode();
				break;
			
			case R.id.call_string_parameter_method:
				dp.callCcode1();
				break;
	
			case R.id.call_int_parameter_method:
				dp.callCcode2();
				break;
				
			default:
				break;
		}
	}

}
