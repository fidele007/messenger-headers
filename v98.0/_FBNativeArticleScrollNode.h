/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ASDisplayNode.h>

@protocol _FBNativeArticleScrollNodeDelegate;
@class FBNativeArticleScrollView;

@interface _FBNativeArticleScrollNode : ASDisplayNode {

	id<_FBNativeArticleScrollNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_FBNativeArticleScrollNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNativeArticleScrollView * scrollView; 
-(void)_staticInitialize;
-(void)subnodeDisplayDidFinish:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 delegate:(id)arg2 scrollViewDelegate:(id)arg3 scrollViewGestureHandler:(id)arg4 ;
-(void)setDelegate:(id<_FBNativeArticleScrollNodeDelegate>)arg1 ;
-(id<_FBNativeArticleScrollNodeDelegate>)delegate;
-(FBNativeArticleScrollView *)scrollView;
-(void)didLoad;
@end

