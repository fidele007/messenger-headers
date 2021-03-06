/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@protocol FBInlineAdHeaderNodeDelegate;
@class FBInlineAdHeaderNodeMetrics, ASTextNode, ASDisplayNode;

@interface FBInlineAdHeaderNode : ASDisplayNode {

	FBInlineAdHeaderNodeMetrics* _metrics;
	ASTextNode* _sponsoredLabelNode;
	ASDisplayNode* _chevronButtonNode;
	long long _layoutDirection;
	id<FBInlineAdHeaderNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInlineAdHeaderNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithMetrics:(id)arg1 layoutDirection:(long long)arg2 ;
-(void)_didTapChevronButtonNode;
-(void)setDelegate:(id<FBInlineAdHeaderNodeDelegate>)arg1 ;
-(id<FBInlineAdHeaderNodeDelegate>)delegate;
-(void)layout;
@end

