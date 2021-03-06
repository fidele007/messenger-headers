/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtensionPresentationStrategy.h>

@class NSString;

@interface MNComposerExtensionKeyboardPresentationStrategy : NSObject <MNComposerExtensionPresentationStrategy> {

	long long _style;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
-(void)present:(id)arg1 ;
-(BOOL)isPresented:(id)arg1 ;
-(BOOL)requiresTextEditing:(id)arg1 ;
-(BOOL)shouldAutoRotate;
-(id)init;
-(long long)style;
-(void)dismiss:(id)arg1 ;
@end

