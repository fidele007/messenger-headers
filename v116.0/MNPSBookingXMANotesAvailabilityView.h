/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNNativeComponentFlowBookingRequestFragment;
@class MNPSBookingSharedNotesView, MNPSBookingSharedHeaderView, NSArray;

@interface MNPSBookingXMANotesAvailabilityView : UIView {

	id<MNNativeComponentFlowBookingRequestFragment> _bookingRequest;
	MNPSBookingSharedNotesView* _topNotesView;
	MNPSBookingSharedNotesView* _bottomNotesView;
	MNPSBookingSharedHeaderView* _headerView;
	NSArray* _ctaViews;
	BOOL _actsAsAdmin;

}
+(CGSize)sizeThatFits:(CGSize)arg1 bookingRequest:(id)arg2 actsAsAdmin:(BOOL)arg3 ;
-(id)initWithBookingRequest:(id)arg1 actsAsAdmin:(BOOL)arg2 delegate:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

