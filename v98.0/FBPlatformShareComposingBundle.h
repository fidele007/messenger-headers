/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBComposerAuthor, FBComposerPublishTarget, FBComposerAppAttribution, NSDictionary;

@interface FBPlatformShareComposingBundle : FBValueObject <NSCopying> {

	NSString* _compositionID;
	FBComposerAuthor* _author;
	FBComposerPublishTarget* _publishTarget;
	NSString* _sourceType;
	FBComposerAppAttribution* _appAttribution;
	NSString* _appProvidedHashtags;
	NSDictionary* _platformTrackingData;

}

@property (nonatomic,copy,readonly) NSString * compositionID;                               //@synthesize compositionID=_compositionID - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAuthor * author;                              //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPublishTarget * publishTarget;                //@synthesize publishTarget=_publishTarget - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceType;                                  //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAppAttribution * appAttribution;              //@synthesize appAttribution=_appAttribution - In the implementation block
@property (nonatomic,copy,readonly) NSString * appProvidedHashtags;                         //@synthesize appProvidedHashtags=_appProvidedHashtags - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * platformTrackingData;                    //@synthesize platformTrackingData=_platformTrackingData - In the implementation block
-(NSString *)compositionID;
-(FBComposerAppAttribution *)appAttribution;
-(id)initWithCompositionID:(id)arg1 author:(id)arg2 publishTarget:(id)arg3 sourceType:(id)arg4 appAttribution:(id)arg5 appProvidedHashtags:(id)arg6 platformTrackingData:(id)arg7 ;
-(FBComposerPublishTarget *)publishTarget;
-(NSString *)appProvidedHashtags;
-(NSDictionary *)platformTrackingData;
-(NSString *)sourceType;
-(FBComposerAuthor *)author;
@end
