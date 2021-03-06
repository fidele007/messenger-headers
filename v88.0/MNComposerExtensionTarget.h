/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

