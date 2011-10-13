//
//  BarChartAppViewController.h
//  BarChartApp
//
//  Created by Hemanth G on 25/07/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CorePlot-CocoaTouch.h"

@interface BarChartAppViewController : UIViewController <CPTPlotDataSource>
{
	
	CPTXYGraph *barChart;

}

@end

