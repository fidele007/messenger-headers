/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CKComponentProvider.h>

@class CKComponentHostingView, NSString;

@interface FBQuickPromotionFooterNativeTemplateView : UIView <CKComponentProvider> {

	CKComponentHostingView* _componentHostingView;

}

@property (nonatomic,retain) CKComponentHostingView * componentHostingView;              //@synthesize componentHostingView=_componentHostingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(CKComponentHostingView *)componentHostingView;
-(void)setComponentHostingView:(CKComponentHostingView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 promotion:(id)arg2 session:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

