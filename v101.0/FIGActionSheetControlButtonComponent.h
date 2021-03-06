/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class FIGActionSheetButtonItem;

@interface FIGActionSheetControlButtonComponent : CKCompositeComponent {

	FIGActionSheetButtonItem* _actionSheetButtonItem;
	CKTypedComponentAction<> _action;
	BOOL _on;

}

@property (getter=isOn,nonatomic,readonly) BOOL on;              //@synthesize on=_on - In the implementation block
+(id)newWithActionItem:(id)arg1 action:(CKTypedComponentAction<>)arg2 metrics:(id)arg3 ;
-(void)_checkmarkButtonTapped:(id)arg1 ;
-(void)_updateState;
-(BOOL)isOn;
-(void)_switchValueChanged:(id)arg1 ;
@end

