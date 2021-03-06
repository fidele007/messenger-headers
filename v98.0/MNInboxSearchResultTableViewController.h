/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MNViewPreviewingHandling;
@class NSNumber;

@interface MNInboxSearchResultTableViewController : UITableViewController {

	id<MNViewPreviewingHandling> _viewPreviewingHandler;
	NSNumber* _topInsetOverride;

}
-(void)_registerForPreviewing;
-(id)initWithStyle:(long long)arg1 viewPreviewingHandler:(id)arg2 ;
-(void)setTableViewTopInsetOverride:(double)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end

