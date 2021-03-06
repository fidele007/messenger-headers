/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>
#import <Messenger/ASNetworkImageNodeDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/FBNativeAdRedesignFooterNodeDelegate.h>

@protocol FBNativeAdShareContentNodeDelegate;
@class FBNativeAdShareContentRedesignNodeMetrics, FBNativeAdCTAButtonNodeMetrics, FBNativeAdRedesignFooterNodeMetrics, ASNetworkImageNode, FBNativeAdRedesignFooterNode, NSString;

@interface FBNativeAdShareContentRedesignChildNode : ASControlNode <ASNetworkImageNodeDelegate, FBPopoverControllerDelegate, FBNativeAdRedesignFooterNodeDelegate> {

	FBNativeAdShareContentRedesignNodeMetrics* _metrics;
	FBNativeAdCTAButtonNodeMetrics* _buttonNodeMetrics;
	FBNativeAdRedesignFooterNodeMetrics* _footerNodeMetrics;
	ASNetworkImageNode* _shareImageNode;
	CGSize _shareImageSize;
	FBNativeAdRedesignFooterNode* _footerNode;
	id<FBNativeAdShareContentNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdShareContentNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)handleIntent:(id)arg1 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)nativeAdRedesignFooterNode:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)didTapNativeAdRedesignFooterNode:(id)arg1 ;
-(void)imageNode:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithImageURLString:(id)arg1 imageSize:(CGSize)arg2 subtitleText:(id)arg3 actionButtonText:(id)arg4 metrics:(id)arg5 session:(id)arg6 ;
-(void)_didTapImageNode;
-(void)setDelegate:(id<FBNativeAdShareContentNodeDelegate>)arg1 ;
-(id<FBNativeAdShareContentNodeDelegate>)delegate;
-(void)layout;
@end

