/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(long long)count;
-(id)init;
-(id)description;
-(id<FBContactImporterAddressbookPersonCredential>)primary;
-(NSArray *)credentials;
@end
