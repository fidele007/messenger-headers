/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBGraphQLConnectionLoadLocation, NSSet;

@interface FBGraphQLConnectionControllerDiagnosticsMismatchedLoadNotification : FBValueObject <NSCopying> {

	NSString* _networkLoadUUID;
	FBGraphQLConnectionLoadLocation* _expectedCurrentLocation;
	FBGraphQLConnectionLoadLocation* _originalLocation;
	NSSet* _loads;

}

@property (nonatomic,copy,readonly) NSString * networkLoadUUID;                                             //@synthesize networkLoadUUID=_networkLoadUUID - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadLocation * expectedCurrentLocation;              //@synthesize expectedCurrentLocation=_expectedCurrentLocation - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadLocation * originalLocation;                     //@synthesize originalLocation=_originalLocation - In the implementation block
@property (nonatomic,copy,readonly) NSSet * loads;                                                          //@synthesize loads=_loads - In the implementation block
-(NSString *)networkLoadUUID;
-(id)initWithNetworkLoadUUID:(id)arg1 expectedCurrentLocation:(id)arg2 originalLocation:(id)arg3 loads:(id)arg4 ;
-(FBGraphQLConnectionLoadLocation *)expectedCurrentLocation;
-(FBGraphQLConnectionLoadLocation *)originalLocation;
-(NSSet *)loads;
@end

