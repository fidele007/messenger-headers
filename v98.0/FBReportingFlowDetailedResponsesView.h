/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBReportingFlowDetailedResponsesViewHeader, UITableView;

@interface FBReportingFlowDetailedResponsesView : UIView {

	FBReportingFlowDetailedResponsesViewHeader* _tableHeaderView;
	int _presentationStyle;
	UITableView* _detailedResponsesTableView;

}

@property (nonatomic,retain) UITableView * detailedResponsesTableView;              //@synthesize detailedResponsesTableView=_detailedResponsesTableView - In the implementation block
-(void)updateTableViewHeaderLayout;
-(id)initWithPromptModel:(id)arg1 presentationStyle:(int)arg2 ;
-(UITableView *)detailedResponsesTableView;
-(void)setDetailedResponsesTableView:(UITableView *)arg1 ;
-(void)layoutSubviews;
@end

