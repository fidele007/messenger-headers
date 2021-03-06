/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBContactImporterAddressbookPersonName, FBContactImporterAddressbookPersonCredentialCollection, FBContactImporterAddressBookPersonPropertyCollection, FBContactImporterAddressbookPersonBirthday, UIImage;

@interface FBContactImporterAddressbookPerson : NSObject {

	NSString* _md5HashValue;
	FBContactImporterAddressbookPersonName* _nameObj;
	NSString* _name;
	FBContactImporterAddressbookPersonCredentialCollection* _phones;
	FBContactImporterAddressbookPersonCredentialCollection* _emails;
	FBContactImporterAddressBookPersonPropertyCollection* _addresses;
	FBContactImporterAddressbookPersonBirthday* _birthday;
	FBContactImporterAddressBookPersonPropertyCollection* _webSites;
	FBContactImporterAddressBookPersonPropertyCollection* _dates;
	FBContactImporterAddressBookPersonPropertyCollection* _socialProfiles;
	FBContactImporterAddressBookPersonPropertyCollection* _relatedNames;
	FBContactImporterAddressBookPersonPropertyCollection* _instantMessages;
	UIImage* _image;
	NSString* _note;
	unsigned long long _recordID;

}

@property (nonatomic,readonly) FBContactImporterAddressbookPersonName * nameObj;                                    //@synthesize nameObj=_nameObj - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressbookPersonCredentialCollection * phones;                     //@synthesize phones=_phones - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressbookPersonCredentialCollection * emails;                     //@synthesize emails=_emails - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * addresses;                    //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressbookPersonBirthday * birthday;                               //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * webSites;                     //@synthesize webSites=_webSites - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * dates;                        //@synthesize dates=_dates - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * socialProfiles;               //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * relatedNames;                 //@synthesize relatedNames=_relatedNames - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * instantMessages;              //@synthesize instantMessages=_instantMessages - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * note;                                                                //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) unsigned long long recordID;                                                         //@synthesize recordID=_recordID - In the implementation block
-(id)initWithName:(id)arg1 emails:(id)arg2 phones:(id)arg3 birthday:(id)arg4 addresses:(id)arg5 webSites:(id)arg6 dates:(id)arg7 socialProfiles:(id)arg8 relatedNames:(id)arg9 instantMessages:(id)arg10 image:(id)arg11 note:(id)arg12 recordID:(unsigned long long)arg13 ;
-(id)initWithABRecord:(void*)arg1 allFields:(BOOL)arg2 ;
-(BOOL)hasCredentials;
-(id)primaryCredential;
-(id)md5HashValue;
-(FBContactImporterAddressbookPersonName *)nameObj;
-(FBContactImporterAddressBookPersonPropertyCollection *)webSites;
-(FBContactImporterAddressBookPersonPropertyCollection *)instantMessages;
-(id)description;
-(NSString *)name;
-(UIImage *)image;
-(FBContactImporterAddressBookPersonPropertyCollection *)relatedNames;
-(FBContactImporterAddressBookPersonPropertyCollection *)socialProfiles;
-(FBContactImporterAddressbookPersonBirthday *)birthday;
-(FBContactImporterAddressbookPersonCredentialCollection *)emails;
-(FBContactImporterAddressbookPersonCredentialCollection *)phones;
-(unsigned long long)recordID;
-(FBContactImporterAddressBookPersonPropertyCollection *)addresses;
-(NSString *)note;
-(FBContactImporterAddressBookPersonPropertyCollection *)dates;
@end

