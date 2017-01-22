/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBKeyboardObserverDelegate;
@class UIView;

@interface FBKeyboardObserver : NSObject {

	BOOL _observingKeyboardNotifications;
	BOOL _delegateWillShow;
	BOOL _delegateDidShow;
	BOOL _delegateWillHide;
	BOOL _delegateDidHide;
	BOOL _delegateWillChangeFrame;
	BOOL _delegateDidChangeFrame;
	BOOL _keyboardAppearing;
	BOOL _keyboardDisappearing;
	BOOL _keyboardAnimating;
	BOOL _keyboardVisible;
	id<FBKeyboardObserverDelegate> _delegate;
	UIView* _owner;

}

@property (assign,nonatomic,__weak) id<FBKeyboardObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * owner;                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) BOOL keyboardAppearing;                                    //@synthesize keyboardAppearing=_keyboardAppearing - In the implementation block
@property (nonatomic,readonly) BOOL keyboardDisappearing;                                 //@synthesize keyboardDisappearing=_keyboardDisappearing - In the implementation block
@property (nonatomic,readonly) BOOL keyboardAnimating;                                    //@synthesize keyboardAnimating=_keyboardAnimating - In the implementation block
@property (nonatomic,readonly) BOOL keyboardVisible;                                      //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
-(void)startObservingKeyboardNotifications;
-(void)stopObservingKeyboardNotifications;
-(BOOL)keyboardAnimating;
-(BOOL)keyboardDisappearing;
-(BOOL)keyboardAppearing;
-(void)_keyboardFrameWillChange:(id)arg1 ;
-(void)_keyboardFrameDidChange:(id)arg1 ;
-(void)_resetKeyboardState;
-(void)setDelegate:(id<FBKeyboardObserverDelegate>)arg1 ;
-(void)dealloc;
-(id<FBKeyboardObserverDelegate>)delegate;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(UIView *)owner;
-(void)setOwner:(UIView *)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(BOOL)keyboardVisible;
@end
