/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithDataSource:(id)arg1 ;
@end

