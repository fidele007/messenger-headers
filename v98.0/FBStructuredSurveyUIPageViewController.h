/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class FBStructuredSurveyUIPageDataSource;

@interface FBStructuredSurveyUIPageViewController : UITableViewController {

	FBStructuredSurveyUIPageDataSource* _dataSource;
	double _previousTableViewHeight;
	BOOL _shouldMaintainScrollFocus;

}

@property (nonatomic,readonly) FBStructuredSurveyUIPageDataSource * dataSource; 
-(void)dealloc;
-(FBStructuredSurveyUIPageDataSource *)dataSource;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
@end
