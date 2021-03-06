/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBImageAttributeIndexConfiguration : FBValueObject <NSCopying> {

	BOOL _dupeDetectionEnabled;
	BOOL _blurDetectionEnabled;
	BOOL _darkDetectionEnabled;
	long long _blurDetectorResolution;

}

@property (nonatomic,readonly) BOOL dupeDetectionEnabled;                     //@synthesize dupeDetectionEnabled=_dupeDetectionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL blurDetectionEnabled;                     //@synthesize blurDetectionEnabled=_blurDetectionEnabled - In the implementation block
@property (nonatomic,readonly) long long blurDetectorResolution;              //@synthesize blurDetectorResolution=_blurDetectorResolution - In the implementation block
@property (nonatomic,readonly) BOOL darkDetectionEnabled;                     //@synthesize darkDetectionEnabled=_darkDetectionEnabled - In the implementation block
-(id)initWithDupeDetectionEnabled:(BOOL)arg1 blurDetectionEnabled:(BOOL)arg2 blurDetectorResolution:(long long)arg3 darkDetectionEnabled:(BOOL)arg4 ;
-(BOOL)dupeDetectionEnabled;
-(BOOL)darkDetectionEnabled;
-(BOOL)blurDetectionEnabled;
-(long long)blurDetectorResolution;
@end

