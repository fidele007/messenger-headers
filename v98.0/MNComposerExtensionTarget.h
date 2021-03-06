/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNComposerExtensionInitiator, NSObject;

@interface MNComposerExtensionTarget : FBValueObject <NSCopying> {

	NSString* _identifier;
	MNComposerExtensionInitiator* _initiator;
	NSObject* _options;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) MNComposerExtensionInitiator * initiator;              //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,copy,readonly) NSObject * options;                                    //@synthesize options=_options - In the implementation block
-(id)initWithIdentifier:(id)arg1 initiator:(id)arg2 options:(id)arg3 ;
-(NSString *)identifier;
-(NSObject *)options;
-(MNComposerExtensionInitiator *)initiator;
@end

