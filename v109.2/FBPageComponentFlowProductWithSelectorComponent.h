/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKCompositeComponent.h>

@class CKComponent, NSArray, FBMemPagesPlatformProduct;

@interface FBPageComponentFlowProductWithSelectorComponent : CKCompositeComponent {

	CKComponent* _pickerComponent;
	NSArray* _items;
	CKTypedComponentAction<> _action;
	FBMemPagesPlatformProduct* _selectedProduct;
	BOOL _isSelected;

}
+(id)newWithModel:(id)arg1 image:(id)arg2 action:(CKTypedComponentAction<>)arg3 isSelected:(BOOL)arg4 initialSelectedProduct:(id)arg5 context:(id)arg6 ;
-(void)keyboardPopUp;
@end

