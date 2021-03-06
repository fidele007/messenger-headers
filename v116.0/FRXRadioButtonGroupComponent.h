/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKCompositeComponent.h>

@interface FRXRadioButtonGroupComponent : CKCompositeComponent {

	long long _selectedIndex;
	id _context;
	CKTypedComponentAction<long, id> _selectionChangeAction;

}

@property (nonatomic,copy,readonly) id context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<long selectionChangeAction;              //@synthesize selectionChangeAction=_selectionChangeAction - In the implementation block
@property (nonatomic,readonly) long long selectedIndex;                                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
+(id)newWithName:(id)arg1 action:(CKTypedComponentAction<long, id>)arg2 context:(id)arg3 size:(const CKComponentSize*)arg4 style:(const CKStackLayoutComponentStyle*)arg5 children:(CKContainerWrapper<std::__1::vector<FRXRadioButtonGroupComponentChild, std::__1::allocator<FRXRadioButtonGroupComponentChild> > >*)arg6 ;
+(id)initialState;
-(void)buttonSelected:(id)arg1 context:(id)arg2 ;
-(CKTypedComponentAction<long)selectionChangeAction;
-(id)context;
-(long long)selectedIndex;
@end

