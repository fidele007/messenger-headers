/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMLESuggestion, FBComposerLifeEventExtraAttachments, NSString;

@interface FBComposerLifeEventAttachments : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	FBMLESuggestion* _lifeEventSuggestion;
	FBMLESuggestion* _customLifeEventSuggestion;
	FBComposerLifeEventExtraAttachments* _lifeEventExtraAttachments;

}

@property (nonatomic,copy,readonly) FBMLESuggestion * lifeEventSuggestion;                                        //@synthesize lifeEventSuggestion=_lifeEventSuggestion - In the implementation block
@property (nonatomic,copy,readonly) FBMLESuggestion * customLifeEventSuggestion;                                  //@synthesize customLifeEventSuggestion=_customLifeEventSuggestion - In the implementation block
@property (nonatomic,copy,readonly) FBComposerLifeEventExtraAttachments * lifeEventExtraAttachments;              //@synthesize lifeEventExtraAttachments=_lifeEventExtraAttachments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMLESuggestion *)lifeEventSuggestion;
-(FBComposerLifeEventExtraAttachments *)lifeEventExtraAttachments;
-(id)initWithLifeEventSuggestion:(id)arg1 customLifeEventSuggestion:(id)arg2 lifeEventExtraAttachments:(id)arg3 ;
-(FBMLESuggestion *)customLifeEventSuggestion;
-(id)shallowCopy;
@end

