/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNComposerExtensionIconSource, UIColor;

@interface MNComposerExtensionIcon : FBValueObject <NSCopying> {

	BOOL _usesCircularMask;
	BOOL _usesBackgroundSelection;
	MNComposerExtensionIconSource* _normalComposerIconSource;
	MNComposerExtensionIconSource* _selectedComposerIconSource;
	UIColor* _iconColor;

}

@property (nonatomic,copy,readonly) MNComposerExtensionIconSource * normalComposerIconSource;                //@synthesize normalComposerIconSource=_normalComposerIconSource - In the implementation block
@property (nonatomic,copy,readonly) MNComposerExtensionIconSource * selectedComposerIconSource;              //@synthesize selectedComposerIconSource=_selectedComposerIconSource - In the implementation block
@property (nonatomic,readonly) BOOL usesCircularMask;                                                        //@synthesize usesCircularMask=_usesCircularMask - In the implementation block
@property (nonatomic,readonly) BOOL usesBackgroundSelection;                                                 //@synthesize usesBackgroundSelection=_usesBackgroundSelection - In the implementation block
@property (nonatomic,copy,readonly) UIColor * iconColor;                                                     //@synthesize iconColor=_iconColor - In the implementation block
-(id)initWithNormalComposerIconSource:(id)arg1 selectedComposerIconSource:(id)arg2 usesCircularMask:(BOOL)arg3 usesBackgroundSelection:(BOOL)arg4 iconColor:(id)arg5 ;
-(BOOL)usesCircularMask;
-(MNComposerExtensionIconSource *)normalComposerIconSource;
-(MNComposerExtensionIconSource *)selectedComposerIconSource;
-(BOOL)usesBackgroundSelection;
-(UIColor *)iconColor;
@end

