/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNParticleEffectAnimation : FBValueObject <NSCopying, NSCoding> {

	NSString* _textureIdentifier;
	long long _framerate;
	long long _numberOfSprites;
	long long _plays;
	NSString* _type;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSString * textureIdentifier;              //@synthesize textureIdentifier=_textureIdentifier - In the implementation block
@property (nonatomic,readonly) long long framerate;                            //@synthesize framerate=_framerate - In the implementation block
@property (nonatomic,readonly) long long numberOfSprites;                      //@synthesize numberOfSprites=_numberOfSprites - In the implementation block
@property (nonatomic,readonly) long long plays;                                //@synthesize plays=_plays - In the implementation block
@property (nonatomic,readonly) CGSize size;                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
-(id)initWithTextureIdentifier:(id)arg1 framerate:(long long)arg2 numberOfSprites:(long long)arg3 plays:(long long)arg4 size:(CGSize)arg5 type:(id)arg6 ;
-(NSString *)textureIdentifier;
-(long long)numberOfSprites;
-(CGSize)size;
-(NSString *)type;
-(long long)plays;
-(long long)framerate;
@end

