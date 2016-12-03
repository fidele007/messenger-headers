/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSoundControllerPlayStrategy;
@class NSMutableArray;

@interface MNSoundController : NSObject {

	NSMutableArray* _soundsFromSoundName;
	id<MNSoundControllerPlayStrategy> _soundPlayStrategy;

}
-(void)stopSound:(long long)arg1 reset:(BOOL)arg2 ;
-(id)initWithSoundPlayStrategy:(id)arg1 ;
-(void)playSystemSound:(unsigned)arg1 ;
-(BOOL)_inAppSoundsAllowed;
-(BOOL)_inAppVibrateAllowed;
-(void)playSound:(long long)arg1 ;
@end

