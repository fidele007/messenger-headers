/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString;

@interface MNWOutgoingAudioAttachment : FBValueObject <NSCopying, NSCoding> {

	NSURL* _audioFileURL;
	double _duration;
	NSString* _fileExtension;
	NSString* _fileMimeType;

}

@property (nonatomic,copy,readonly) NSURL * audioFileURL;                  //@synthesize audioFileURL=_audioFileURL - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileExtension;              //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileMimeType;               //@synthesize fileMimeType=_fileMimeType - In the implementation block
-(NSURL *)audioFileURL;
-(NSString *)fileMimeType;
-(id)initWithAudioFileURL:(id)arg1 duration:(double)arg2 fileExtension:(id)arg3 fileMimeType:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(NSString *)fileExtension;
@end

