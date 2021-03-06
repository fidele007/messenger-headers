/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBComposerConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _audienceEnabled;
	BOOL _filtersEnabled;
	BOOL _stickersEnabled;
	BOOL _textOnPhotosEnabled;
	BOOL _doodlesEnabled;

}

@property (nonatomic,readonly) BOOL audienceEnabled;                  //@synthesize audienceEnabled=_audienceEnabled - In the implementation block
@property (nonatomic,readonly) BOOL filtersEnabled;                   //@synthesize filtersEnabled=_filtersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL stickersEnabled;                  //@synthesize stickersEnabled=_stickersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL textOnPhotosEnabled;              //@synthesize textOnPhotosEnabled=_textOnPhotosEnabled - In the implementation block
@property (nonatomic,readonly) BOOL doodlesEnabled;                   //@synthesize doodlesEnabled=_doodlesEnabled - In the implementation block
-(id)initWithAudienceEnabled:(BOOL)arg1 filtersEnabled:(BOOL)arg2 stickersEnabled:(BOOL)arg3 textOnPhotosEnabled:(BOOL)arg4 doodlesEnabled:(BOOL)arg5 ;
-(BOOL)audienceEnabled;
-(BOOL)filtersEnabled;
-(BOOL)stickersEnabled;
-(BOOL)textOnPhotosEnabled;
-(BOOL)doodlesEnabled;
@end

