/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKComponent.h>

@class CKComponent;

@interface FBTicketLeftRightLayoutComponent : CKComponent {

	CKComponent* _leftComponent;
	CKComponent* _rightComponent;
	FBTicketLeftRightLayoutComponentOptions _options;

}
+(id)newWithLeftComponent:(id)arg1 rightComponent:(id)arg2 options:(const FBTicketLeftRightLayoutComponentOptions*)arg3 ;
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
@end

