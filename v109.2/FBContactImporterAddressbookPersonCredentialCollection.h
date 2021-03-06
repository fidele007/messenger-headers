/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContactImporterAddressbookPersonCredential;
@class NSArray;

@interface FBContactImporterAddressbookPersonCredentialCollection : NSObject {

	id<FBContactImporterAddressbookPersonCredential> _primary;
	NSArray* _credentials;

}

@property (nonatomic,readonly) id<FBContactImporterAddressbookPersonCredential> primary;              //@synthesize primary=_primary - In the implementation block
@property (nonatomic,readonly) NSArray * credentials;                                                 //@synthesize credentials=_credentials - In the implementation block
-(id)initPhonesWithABRecord:(void*)arg1 ;
-(id)initEmailsWithABRecord:(void*)arg1 ;
-(id)valuesAsStrings;
-(id)_initCommonWithABRecord:(void*)arg1 usingProperty:(int)arg2 ;
-(void)_copyCredentialsFromRecord:(void*)arg1 byProperty:(int)arg2 ;
-(void)addCredential:(id)arg1 ;
-(id)labelValuesAsStrings;
-(id)init;
-(long long)count;
-(id)description;
-(NSArray *)credentials;
-(id<FBContactImporterAddressbookPersonCredential>)primary;
@end

