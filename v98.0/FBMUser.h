/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMUserIdentityTypeProperties, FBMUserName, FBMPageCustomerData, FBMUserFetchStatus;

@interface FBMUser : FBValueObject <NSCoding, NSCopying> {

	BOOL _profilePictureIsSilhouette;
	BOOL _acceptsMessagesFromViewer;
	BOOL _canSeeViewerMontage;
	NSString* _userId;
	FBMUserIdentityTypeProperties* _identityTypeProperties;
	FBMUserName* _name;
	FBMUserName* _phoneticName;
	NSString* _username;
	NSString* _profilePicHash;
	double _communicationRank;
	unsigned long long _blockedByViewerStatus;
	FBMPageCustomerData* _pageCustomerData;
	long long _estimatedFolderDestination;
	FBMUserFetchStatus* _fetchStatus;

}

@property (nonatomic,copy,readonly) NSString * userId;                                                   //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) FBMUserIdentityTypeProperties * identityTypeProperties;              //@synthesize identityTypeProperties=_identityTypeProperties - In the implementation block
@property (nonatomic,copy,readonly) FBMUserName * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) FBMUserName * phoneticName;                                          //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                                 //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePicHash;                                           //@synthesize profilePicHash=_profilePicHash - In the implementation block
@property (nonatomic,readonly) BOOL profilePictureIsSilhouette;                                          //@synthesize profilePictureIsSilhouette=_profilePictureIsSilhouette - In the implementation block
@property (nonatomic,readonly) double communicationRank;                                                 //@synthesize communicationRank=_communicationRank - In the implementation block
@property (nonatomic,readonly) unsigned long long blockedByViewerStatus;                                 //@synthesize blockedByViewerStatus=_blockedByViewerStatus - In the implementation block
@property (nonatomic,readonly) BOOL acceptsMessagesFromViewer;                                           //@synthesize acceptsMessagesFromViewer=_acceptsMessagesFromViewer - In the implementation block
@property (nonatomic,copy,readonly) FBMPageCustomerData * pageCustomerData;                              //@synthesize pageCustomerData=_pageCustomerData - In the implementation block
@property (nonatomic,readonly) long long estimatedFolderDestination;                                     //@synthesize estimatedFolderDestination=_estimatedFolderDestination - In the implementation block
@property (nonatomic,readonly) BOOL canSeeViewerMontage;                                                 //@synthesize canSeeViewerMontage=_canSeeViewerMontage - In the implementation block
@property (nonatomic,copy,readonly) FBMUserFetchStatus * fetchStatus;                                    //@synthesize fetchStatus=_fetchStatus - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(FBMUserIdentityTypeProperties *)identityTypeProperties;
-(unsigned long long)blockedByViewerStatus;
-(NSString *)profilePicHash;
-(BOOL)profilePictureIsSilhouette;
-(double)communicationRank;
-(BOOL)acceptsMessagesFromViewer;
-(BOOL)canSeeViewerMontage;
-(FBMUserFetchStatus *)fetchStatus;
-(long long)estimatedFolderDestination;
-(id)initWithUserId:(id)arg1 identityTypeProperties:(id)arg2 name:(id)arg3 phoneticName:(id)arg4 username:(id)arg5 profilePicHash:(id)arg6 profilePictureIsSilhouette:(BOOL)arg7 communicationRank:(double)arg8 blockedByViewerStatus:(unsigned long long)arg9 acceptsMessagesFromViewer:(BOOL)arg10 pageCustomerData:(id)arg11 estimatedFolderDestination:(long long)arg12 canSeeViewerMontage:(BOOL)arg13 fetchStatus:(id)arg14 ;
-(FBMPageCustomerData *)pageCustomerData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBMUserName *)name;
-(FBMUserName *)phoneticName;
-(NSString *)username;
-(NSString *)userId;
@end

