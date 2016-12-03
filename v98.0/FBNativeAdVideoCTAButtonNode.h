/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@protocol FBNativeAdVideoCTAButtonNodeDelegate;
@class FBNativeAdVideoCTAButtonNodeMetrics, ASDisplayNode;

@interface FBNativeAdVideoCTAButtonNode : ASDisplayNode {

	FBNativeAdVideoCTAButtonNodeMetrics* _metrics;
	ASDisplayNode* _ctaButtonNode;
	id<FBNativeAdVideoCTAButtonNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdVideoCTAButtonNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_didTapActionButtonNode;
-(id)initWithActionButtonText:(id)arg1 metrics:(id)arg2 ;
-(void)setDelegate:(id<FBNativeAdVideoCTAButtonNodeDelegate>)arg1 ;
-(id<FBNativeAdVideoCTAButtonNodeDelegate>)delegate;
-(void)layout;
@end
