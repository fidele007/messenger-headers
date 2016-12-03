/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPSAppointmentButtonViewDelegate.h>

@protocol MNPSConsumerAppointmentDetailViewDelegate;
@class UIView, UITableView, NSString;

@interface MNPSConsumerAppointmentDetailView : UIView <MNPSAppointmentButtonViewDelegate> {

	id<MNPSConsumerAppointmentDetailViewDelegate> _delegate;
	UIView* _buttonView;
	UIView* _headerView;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 dataModel:(id)arg2 delegate:(id)arg3 downloaderFactory:(id)arg4 tableViewDataSource:(id)arg5 tableViewDelegate:(id)arg6 cancelButtonVisible:(BOOL)arg7 ;
-(void)buttonViewDidTap:(id)arg1 ;
-(void)fb_addButtonView;
-(void)fb_addHeaderViewWithDataModel:(id)arg1 downloaderFactory:(id)arg2 ;
-(void)fb_addTableViewWithDataSource:(id)arg1 delegate:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

