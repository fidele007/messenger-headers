/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, FBInstantGameUIMetrics, UIView, UILabel, NSArray;

@interface FBQuicksilverChatHeadsView : UIView {

	FBUserSession* _session;
	FBInstantGameUIMetrics* _metrics;
	UIView* _chatHeadsView;
	UILabel* _numChatHeadsLabel;
	NSArray* _chatHeadViewCells;
	unsigned long long _numberOfTotalChatHeads;
	unsigned long long _numberOfDisplayedChatHeads;
	long long _chatHeadsViewState;

}
-(void)_layoutChatHeadsViewCells;
-(void)_setChatHeadsData:(id)arg1 ;
-(void)_animateWithDirection:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)_chatHeadCellFrameAtIndex:(unsigned long long)arg1 state:(long long)arg2 ;
-(void)_initNumChatHeadsLabel;
-(void)_prepareDisplayedChatHeadsViewCells:(unsigned long long)arg1 ;
-(BOOL)_hasChatHeadLabel;
-(void)_animateLabelWithDirection:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_animateCellsWithDirection:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setChatHeadsData:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)layoutSubviews;
-(id)initWithSession:(id)arg1 ;
@end
