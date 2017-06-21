package ciagent;

import java.io.*;

public class CIAgentState implements Serializable {
	public static final int UNINTIATED =0 ;
	public static final int INITIATED = 1;
	public static final int ACTIVE =  2;
	public static final int SUSPENDED = 3;
	public static final int UNKNOWN = 4;
	private int state;

	public CIAgentState() {
		state = UNINTIATED;
	}
	public synchronized void setState(int state){
		this.state = state;
	}

	public String toString(){
		switch(state){
			case UNINTIATED:{
				return "Uninitiated";
			}
			case INITIATED: {
				return "Initiated";
			}
			case ACTIVE: {
				return "Active";
			}
			case SUSPENDED: {
				return "Suspended";
			}
			case UNKNOWN: {
				return "Unknown";
			}
		}
		return "Unknown";	
	}
}
