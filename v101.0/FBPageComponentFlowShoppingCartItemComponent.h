/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class FBMemPagesPlatformShoppingCartItem;

@interface FBPageComponentFlowShoppingCartItemComponent : CKCompositeComponent {

	CKTypedComponentAction<> _action;
	FBMemPagesPlatformShoppingCartItem* _model;

}
+(id)newWithModel:(id)arg1 context:(id)arg2 currentCount:(long long)arg3 action:(CKTypedComponentAction<>)arg4 insets:(UIEdgeInsets)arg5 ;
-(void)didUpdateStepper:(id)arg1 newQuantity:(id)arg2 ;
@end
