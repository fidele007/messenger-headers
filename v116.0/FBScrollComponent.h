/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKComponent.h>

@class CKComponent;

@interface FBScrollComponent : CKComponent {

	CKComponent* _child;
	int _direction;
	UIEdgeInsets _contentInset;
	FBScrollComponentDelegateActions _scrollDelegateActions;

}

@property (assign,nonatomic) FBScrollComponentDelegateActions scrollDelegateActions;              //@synthesize scrollDelegateActions=_scrollDelegateActions - In the implementation block
+(id)newWithDirection:(int)arg1 contentInset:(UIEdgeInsets)arg2 scrollDelegateActions:(FBScrollComponentDelegateActions)arg3 child:(id)arg4 ;
-(FBScrollComponentDelegateActions)scrollDelegateActions;
-(void)setScrollDelegateActions:(FBScrollComponentDelegateActions)arg1 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(MountResult*)mountInContext:(const MountContext*)arg1 size:(CGSize)arg2 children:(shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > >*)arg3 supercomponent:(id)arg4 ;
-(void)scrollToBottom;
@end

