/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSyncObjectPublisherInfo : FBValueObject <FBObjectShallowCopyProtocol, NSCopying> {

	NSString* _syncObjectUUID;
	NSString* _caption;

}

@property (nonatomic,copy,readonly) NSString * syncObjectUUID;              //@synthesize syncObjectUUID=_syncObjectUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * caption;                     //@synthesize caption=_caption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSyncObjectUUID:(id)arg1 caption:(id)arg2 ;
-(NSString *)syncObjectUUID;
-(NSString *)caption;
-(id)shallowCopy;
@end

