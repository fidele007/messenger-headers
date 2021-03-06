/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMontageComposerPreviewContentState : FBValueObject <NSCopying> {

	BOOL _canSaveWithoutEditing;
	long long _muteButtonState;

}

@property (nonatomic,readonly) long long muteButtonState;               //@synthesize muteButtonState=_muteButtonState - In the implementation block
@property (nonatomic,readonly) BOOL canSaveWithoutEditing;              //@synthesize canSaveWithoutEditing=_canSaveWithoutEditing - In the implementation block
-(BOOL)canSaveWithoutEditing;
-(long long)muteButtonState;
-(id)initWithMuteButtonState:(long long)arg1 canSaveWithoutEditing:(BOOL)arg2 ;
@end

